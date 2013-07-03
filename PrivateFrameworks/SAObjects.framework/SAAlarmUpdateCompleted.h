/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAAlarmUpdateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSURL * alarmId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)updateCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateCompleted;

- (void)setAlarmId:(id)arg1;
- (id)alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end