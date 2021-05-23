/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSWPOffscreenColumn <Swift>

@property (nonatomic, readonly) unsigned long long startCharIndex;
@property (nonatomic, readonly) struct _NSRange range;
@property (nonatomic, readonly) unsigned long long startAnchoredCharIndex;
@property (nonatomic, readonly) struct _NSRange anchoredRange;
@property (nonatomic, readonly) unsigned long long nextWidowPullsDownFromCharIndex;

- (unsigned short)trimToCharIndex:inTarget:removeAutoNumberFootnoteCount: /* Error: Ran out of types for this method. */;

@end
