/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PSICachedGroup : NSObject <Swift>

{
    NSString *_text;
    NSString *_identifier;
    unsigned long long _category;
    unsigned long long _owningGroupId;
    unsigned long long _groupId;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned long long owningGroupId;
@property (nonatomic) unsigned long long groupId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4;

@end
