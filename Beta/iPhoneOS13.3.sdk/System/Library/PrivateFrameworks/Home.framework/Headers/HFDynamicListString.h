/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HFDynamicListString : NSObject

{
    NSArray *_stringList;
    NSString *_truncationFormat;
    NSString *_summaryFormat;
}

@property (copy, nonatomic) NSArray *stringList;
@property (copy, nonatomic) NSString *truncationFormat;
@property (copy, nonatomic) NSString *summaryFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithList:(id)arg1 truncationFormat:(id)arg2 summaryFormat:(id)arg3;
- (id)attributeStringsSortedBySize:(id)arg1;
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;
- (id)stringWithAttributes:(id)arg1;
- (_Bool)prefersDynamicString;

@end
