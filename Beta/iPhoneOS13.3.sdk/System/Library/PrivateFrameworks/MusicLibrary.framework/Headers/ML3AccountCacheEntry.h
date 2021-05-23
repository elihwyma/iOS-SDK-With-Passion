/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ML3AccountCacheEntry : NSObject

{
    NSString *_appleID;
    NSString *_altDSID;
}

@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *altDSID;

- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;

@end
