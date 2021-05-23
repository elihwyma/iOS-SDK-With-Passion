/*
 Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface CPMLSchema : NSObject

{
    NSMutableArray *schema;
    NSMutableString *schemaHeader;
    NSMutableString *schemaHeaderWithType;
    NSMutableArray *attribute;
    NSMutableArray *schemaHDef;
    NSMutableArray *nsRemapTable;
    NSMutableArray *_categoricalDataList;
    NSMutableArray *_replaceMissingValue;
    NSMutableArray *_matchReplaceValue;
    int yColumnPosition;
    NSMutableArray *availableOptions;
    NSMutableArray *_indexColumnList;
}

@property (nonatomic, readonly) NSMutableArray *attribute;
@property (nonatomic, readonly) NSMutableArray *indexColumnList;
@property (nonatomic, readonly) NSMutableString *schemaHeader;
@property (nonatomic, readonly) NSMutableString *schemaHeaderWithType;
@property (nonatomic, readonly) NSMutableArray *nsRemapTable;
@property (nonatomic, readonly) NSMutableArray *availableOptions;

- (id)init:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (unsigned long long)getTotalAttributes;
- (id)getUserDefinedCategoricalData:(unsigned long long)arg1;
- (int)getYColumnPosition;
- (int)getSchemaType:(unsigned long long)arg1;
- (id)getColumnName:(unsigned long long)arg1;
- (int)getVectorContent:(unsigned long long)arg1;
- (_Bool)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2;
- (id)getSubstituteValue:(unsigned long long)arg1;
- (_Bool)isStringType:(unsigned long long)arg1;
- (_Bool)isVectorType:(unsigned long long)arg1;
- (int)getColumnPosition:(id)arg1;
- (_Bool)isRealType:(unsigned long long)arg1;
- (_Bool)isIntType:(unsigned long long)arg1;
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1;
- (_Bool)isColumnContinous:(unsigned int)arg1;
- (_Bool)isNumType:(unsigned long long)arg1;
- (_Bool)hasOptions:(unsigned long long)arg1;

@end
