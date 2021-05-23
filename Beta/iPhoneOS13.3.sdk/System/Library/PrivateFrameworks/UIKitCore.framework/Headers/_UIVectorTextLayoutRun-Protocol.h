/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol _UIVectorTextLayoutRun <Swift>

@property (nonatomic, readonly) unsigned long long lineIndex;
@property (nonatomic, readonly) double baseline;
@property (nonatomic, readonly) struct CGRect usedRunRect;
@property (nonatomic, readonly) struct CGRect lineRect;
@property (nonatomic, readonly) struct CGRect usedLineRect;

- (unsigned short)string;
- (unsigned short)font;
- (unsigned short)renderInContext: /* Error: Ran out of types for this method. */;
- (unsigned short)glyphCount;
- (unsigned short)stringRange;
- (unsigned short)shouldRender;
- (unsigned short)enumerateGlyphsUsingBlock: /* Error: Ran out of types for this method. */;

@end
