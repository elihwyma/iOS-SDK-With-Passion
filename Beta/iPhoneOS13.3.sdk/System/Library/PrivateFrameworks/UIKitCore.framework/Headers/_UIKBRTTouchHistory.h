/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistory : NSObject <Swift>

{
    NSMutableArray *_history;
    struct CGPoint _historyOffset;
    double _lastDecayTime;
    _Bool _isLeftHand;
}

@property (nonatomic, readonly) struct CGPoint historyOffset;
@property (nonatomic) _Bool isLeftHand;
@property (nonatomic, readonly) _Bool hasHistory;
@property (nonatomic, readonly) double lastTime;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (void)clearHistory;
- (id)initWithIsLeftHand:(_Bool)arg1;
- (void)addInfo:(id)arg1;
- (_Bool)containsInfo:(id)arg1;
- (void)removeInfo:(id)arg1;
- (void)decayHistory;
- (void)adjustHistoryOffset:(struct CGPoint)arg1;
- (void)_updateOffset;
- (void)_decayHistoryToSize:(unsigned long long)arg1;
- (void)_sortHistory;

@end
