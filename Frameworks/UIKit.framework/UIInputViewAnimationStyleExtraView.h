/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView;

@interface UIInputViewAnimationStyleExtraView : NSObject  {
    int _clipContainerType;
    UIView *_view;
    int _alignment;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animation;

}

@property int clipContainerType;
@property(retain) UIView * view;
@property int alignment;
@property(copy) id animation;

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(id)arg3 onSnapshot:(BOOL)arg4;

- (void)setAlignment:(int)arg1;
- (int)alignment;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void)dealloc;
- (void)setClipContainerType:(int)arg1;
- (int)clipContainerType;
- (void)setView:(id)arg1;
- (id)view;

@end
