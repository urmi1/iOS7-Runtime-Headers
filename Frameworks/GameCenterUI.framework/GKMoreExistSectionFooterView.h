/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView  {
    GKLabel *_label;
}

@property(retain) NSString * text;
@property(retain) GKLabel * label;

+ (float)defaultHeight;
+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)text;
- (id)label;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;

@end
