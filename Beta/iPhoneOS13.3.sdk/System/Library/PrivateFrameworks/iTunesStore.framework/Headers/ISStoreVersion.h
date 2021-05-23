/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface ISStoreVersion : NSObject

{
    NSURL *_redirectURL;
}

@property (retain, nonatomic) NSURL *redirectURL;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
