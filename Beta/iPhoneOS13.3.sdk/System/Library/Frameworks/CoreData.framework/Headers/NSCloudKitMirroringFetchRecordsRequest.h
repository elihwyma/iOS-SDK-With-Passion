/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringImportRequest.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest

{
    NSArray *_objectIDsToFetch;
    NSDictionary *_entityNameToAttributesToFetch;
    NSDictionary *_entityNameToAttributeNamesToFetch;
    _Bool _editable;
}

@property (copy, nonatomic) NSArray *objectIDsToFetch;
@property (copy, nonatomic, readonly) NSDictionary *entityNameToAttributesToFetch;

- (void)dealloc;
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isEditable;
- (void)throwNotEditable:(SEL)arg1;
- (_Bool)validateForUseWithStore:(id)arg1 error:(id *)arg2;
- (id)_entityNameToAttributeNamesToFetch;
- (void)setEntityNameToAttributesToFetch:(id)arg1;
- (void)setEntityNameToAttributeNamesToFetch:(id)arg1;

@end
