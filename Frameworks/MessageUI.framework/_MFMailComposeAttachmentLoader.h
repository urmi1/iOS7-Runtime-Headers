/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject  {
    MFMailMessage *_message;
    id _content;
    BOOL _isDraft;
}


- (void)loadAttachments;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(BOOL)arg3;
- (void)dealloc;

@end
