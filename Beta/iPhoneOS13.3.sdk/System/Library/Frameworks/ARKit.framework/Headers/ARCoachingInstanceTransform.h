/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARCoachingInstanceTransform : NSObject

{
    CDStruct_14d5dc5e _baseTransform;
    CDStruct_14d5dc5e _transform;
    MISSING_TYPE *_localScale;
    MISSING_TYPE *_localTranslation;
    MISSING_TYPE *_recordedScale;
    MISSING_TYPE *_recordedTranslation;
}

@property (nonatomic, readonly) CDStruct_14d5dc5e transform;
@property (nonatomic) MISSING_TYPE *localScale;
@property (nonatomic) MISSING_TYPE *recordedScale;
@property (nonatomic) MISSING_TYPE *localTranslation;
@property (nonatomic) MISSING_TYPE *recordedTranslation;

- (id)init:(CDStruct_14d5dc5e)arg1;
- (void)doTransform;

@end
