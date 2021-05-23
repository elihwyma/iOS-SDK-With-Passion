/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNOperationPoints.h>

@class NSMapTable, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNSceneTaxonomyOperationPoints : VNOperationPoints

{
    NSString *_frameworkOperationPointsIdentifier;
    NSURL *_nonframeworkDataURL;
    NSMapTable *_labelToOperationPointsDataIndexMap;
    CDStruct_47a8b21a *_operationPointsDataArray;
    unsigned long long _cachedHashValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;
+ (id)loadFromPropertyList:(id)arg1 error:(id *)arg2;
+ (id)loadFromIdentifier:(id)arg1 error:(id *)arg2;
+ (id)URLForIdentifier:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (id)initWithLabelToOperationPointsDataIndexMap:(id)arg1 operationPointsDataArray:(CDStruct_47a8b21a *)arg2;
- (const CDStruct_47a8b21a *)_operationPointsDataForClassificationIdentifier:(id)arg1 error:(id *)arg2;
- (id)_allClassificationIdentifiers;
- (id)_propertyListRepresentation;

@end
