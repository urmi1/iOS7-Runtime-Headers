/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebTiledBackingLayer : CALayer  {
    struct OwnPtr<WebCore::TileController> { 
        struct TileController {} *m_ptr; 
    } _tileController;
}


- (struct TiledBacking { int (**x1)(); }*)tiledBacking;
- (void)setContentsScale:(float)arg1;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (id)tileContainerLayer;
- (void)setOpaque:(BOOL)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (BOOL)acceleratesDrawing;
- (BOOL)isOpaque;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)actionForKey:(id)arg1;
- (void)setNeedsDisplay;
- (id)initWithLayer:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
