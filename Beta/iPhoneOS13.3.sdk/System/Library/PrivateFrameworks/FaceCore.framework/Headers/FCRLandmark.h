/*
 Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCRLandmark : NSObject

{
    NSString *type;
    unsigned long long pointCount;
    struct CGPoint *points;
}

@property (readonly) NSString *type;
@property (readonly) unsigned long long pointCount;
@property (readonly) struct CGPoint *points;

+ (id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;

- (void)dealloc;
- (id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;

@end
