/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage;

@interface GKGameListIconBrush : GKImageBrush  {
    UIImage *_maskImage;
    UIImage *_shadowImage;
    UIImage *_shineImage;
}

@property(retain) UIImage * maskImage;
@property(retain) UIImage * shadowImage;
@property(retain) UIImage * shineImage;


- (id)maskImage;
- (void)setShineImage:(id)arg1;
- (id)shineImage;
- (void)setMaskImage:(id)arg1;
- (float)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;

@end
