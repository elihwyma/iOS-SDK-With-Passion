/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectModel, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitModelValidator : NSObject

{
    NSManagedObjectModel *_model;
    NSString *_configurationName;
    _Bool _skipValueTransformerValidation;
    _Bool _validateLegacyMetadataAttributes;
}

@property (nonatomic) _Bool skipValueTransformerValidation;
@property (nonatomic) _Bool validateLegacyMetadataAttributes;

+ (id)stringFromDeleteRule:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)validate:(id *)arg1;
- (_Bool)_validateManagedObjectModel:(id)arg1 error:(id *)arg2;
- (_Bool)validateEntities:(id)arg1 error:(id *)arg2;
- (id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2;
- (_Bool)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id *)arg4;

@end
