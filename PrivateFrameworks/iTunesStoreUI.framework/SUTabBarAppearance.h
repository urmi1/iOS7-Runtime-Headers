/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, UIImage;

@interface SUTabBarAppearance : NSObject <NSCopying> {
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    float _tabBarButtonSpacing;
    float _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * dividerImage;
@property(retain) UIImage * selectedDividerImage;
@property(retain) UIImage * selectionIndicatorImage;
@property float tabBarButtonSpacing;
@property float tabBarButtonWidth;


- (void)setTabBarButtonWidth:(float)arg1;
- (void)setTabBarButtonSpacing:(float)arg1;
- (void)setSelectedDividerImage:(id)arg1;
- (void)enumerateTitleTextAttributesUsingBlock:(id)arg1;
- (id)selectedDividerImage;
- (float)tabBarButtonSpacing;
- (float)tabBarButtonWidth;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dividerImage;
- (void)setDividerImage:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)backgroundImage;

@end
