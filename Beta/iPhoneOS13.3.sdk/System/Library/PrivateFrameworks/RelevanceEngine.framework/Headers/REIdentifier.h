/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSString.h>

@interface REIdentifier : NSString

{
    unsigned long long _hash;
    unsigned long long _length;
    NSString *_dataSource;
    NSString *_section;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *dataSource;
@property (nonatomic, readonly) NSString *section;
@property (nonatomic, readonly) NSString *identifier;

- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (id)initWithDataSource:(id)arg1 section:(id)arg2 identifier:(id)arg3;

@end
