/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface BLHLSMedia : NSObject

{
    NSString *_type;
    NSURL *_url;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *name;

- (id)description;
- (void)setPropertiesFromAttributeList:(id)arg1;

@end
