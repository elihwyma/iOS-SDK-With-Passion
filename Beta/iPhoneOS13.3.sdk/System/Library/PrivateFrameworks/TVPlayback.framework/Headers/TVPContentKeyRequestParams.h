/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TVPContentKeyRequestParams : NSObject

{
    NSString *_keyIdentifier;
    NSArray *_keyFormatVersions;
}

@property (retain, nonatomic) NSString *keyIdentifier;
@property (retain, nonatomic) NSArray *keyFormatVersions;

@end
