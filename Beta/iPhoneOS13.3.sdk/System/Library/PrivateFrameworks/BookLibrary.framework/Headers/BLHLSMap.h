/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface BLHLSMap : NSObject

{
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *url;

- (id)description;
- (id)initWithURL:(id)arg1;
- (void)setPropertiesFromAttributeList:(id)arg1;

@end
