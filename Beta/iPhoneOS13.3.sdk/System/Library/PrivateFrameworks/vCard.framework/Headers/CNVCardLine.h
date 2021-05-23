/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CNVCardLine : NSObject

{
    NSString *_name;
    id _value;
    NSMutableArray *_parameters;
    NSString *_grouping;
    NSMutableArray *_groupedLines;
    NSString *_itemSeparator;
}

@property (readonly) NSString *name;
@property (readonly) id value;
@property (readonly) NSArray *parameters;
@property (readonly) NSString *groupingName;
@property (readonly) NSArray *groupedLines;
@property (readonly) NSString *itemSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)versionPlaceholderLine;
+ (id)lineWithLiteralValue:(id)arg1;
+ (id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
+ (id)lineWithName:(id)arg1 value:(id)arg2;

- (void)serializeWithStrategy:(id)arg1;
- (void)addParameterWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)makeGroupingNameWithCounter:(long long *)arg1;
- (void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addGroupedLine:(id)arg1 withCounter:(long long *)arg2;
- (_Bool)canSerializeWithStrategy:(id)arg1;
- (void)serializeValueWithStrategy:(id)arg1;

@end
