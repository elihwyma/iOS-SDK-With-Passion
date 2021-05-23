/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSDMagicMoveMatchObject, TSDTextureContext;

@interface TSDMagicMoveMatch : NSObject

{
    TSDMagicMoveMatchObject *_outgoingObject;
    TSDMagicMoveMatchObject *_incomingObject;
    long long _matchType;
    double _distance;
    double _zOrderDistance;
    double _attributeMatchPercent;
    TSDTextureContext *_textureContext;
    long long _matchCost;
    NSString *_name;
}

@property (nonatomic, readonly) TSDMagicMoveMatchObject *outgoingObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *incomingObject;
@property (nonatomic) long long matchType;
@property (nonatomic) double distance;
@property (nonatomic) double zOrderDistance;
@property (nonatomic) double attributeMatchPercent;
@property (retain, nonatomic) TSDTextureContext *textureContext;
@property (nonatomic, readonly) long long matchCost;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool isTextMatch;
@property (nonatomic, readonly) id incomingMatchObject;
@property (nonatomic, readonly) id outgoingMatchObject;

+ (id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(long long)arg3 attributeMatchPercent:(double)arg4 textureContext:(id)arg5;

- (void)dealloc;
- (id)description;
- (void)p_updateMagicMoveCost;
- (long long)compareToMatch:(id)arg1;
- (_Bool)conflictsWithMatch:(id)arg1;

@end
