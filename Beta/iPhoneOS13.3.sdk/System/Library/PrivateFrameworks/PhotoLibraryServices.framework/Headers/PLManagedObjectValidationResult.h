/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObject;

@protocol PLValidatedManagedObject;

@interface PLManagedObjectValidationResult : NSObject

{
    _Bool _status;
    NSManagedObject<PLValidatedManagedObject> *_validatedObject;
    NSArray *_errorMessages;
    NSArray *_infoMessages;
}

@property (nonatomic) _Bool status;
@property (retain, nonatomic) NSManagedObject<PLValidatedManagedObject> *validatedObject;
@property (retain, nonatomic) NSArray *errorMessages;
@property (retain, nonatomic) NSArray *infoMessages;

@end
