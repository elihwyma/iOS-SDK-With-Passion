/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCMagazineGenre : NSObject <Swift>

{
    NSString *_genre;
    NSString *_localizedDescription;
}

@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)magazineGenreWithGenre:(id)arg1 localizedDescription:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithGenre:(id)arg1 localizedDescription:(id)arg2;

@end
