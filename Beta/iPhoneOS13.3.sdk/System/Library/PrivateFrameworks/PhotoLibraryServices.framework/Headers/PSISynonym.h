/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PSISynonym : NSObject <Swift>

{
    NSString *_text;
    unsigned long long _category;
    unsigned long long _owningGroupId;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned long long owningGroupId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
- (id)initWithText:(id)arg1 category:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3;

@end
