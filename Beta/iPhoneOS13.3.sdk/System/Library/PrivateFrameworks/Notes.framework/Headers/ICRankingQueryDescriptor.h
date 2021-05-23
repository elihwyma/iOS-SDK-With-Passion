/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICRankingQueryDescriptor : NSObject

{
    NSString *_fieldName;
    long long _type;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) long long type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFieldName:(id)arg1 type:(long long)arg2;

@end
