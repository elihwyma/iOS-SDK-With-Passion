/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

{
    id <CPLAbstractObject> _abstractObject;
}

@property (weak, nonatomic, readonly) id <CPLAbstractObject> abstractObject;

- (id)init;
- (id)description;
- (id)initWithAbstractObject:(id)arg1;

@end
