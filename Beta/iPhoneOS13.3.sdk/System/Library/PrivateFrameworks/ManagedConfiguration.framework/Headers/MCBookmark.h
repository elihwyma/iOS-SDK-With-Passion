/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MCBookmark : NSObject

{
    NSURL *_URL;
    NSString *_title;
    NSString *_path;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSerializableDictionary:(id)arg1;
- (id)serializableDictionary;

@end
