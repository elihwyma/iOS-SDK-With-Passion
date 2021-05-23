/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RESectionPath : NSObject

{
    NSString *_sectionName;
    unsigned long long _element;
}

@property (copy, nonatomic, readonly) NSString *sectionName;
@property (nonatomic) unsigned long long element;

+ (id)sectionPathWithSectionName:(id)arg1 element:(unsigned long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionName:(id)arg1 element:(unsigned long long)arg2;

@end
