/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSString;

@interface EMTToken : NSObject

{
    _Bool _precededBySpace;
    _Bool _followedBySpace;
    float _confidence;
    NSString *_text;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) _Bool precededBySpace;
@property (nonatomic, readonly) _Bool followedBySpace;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(_Bool)arg3 followedBySpace:(_Bool)arg4;

@end
