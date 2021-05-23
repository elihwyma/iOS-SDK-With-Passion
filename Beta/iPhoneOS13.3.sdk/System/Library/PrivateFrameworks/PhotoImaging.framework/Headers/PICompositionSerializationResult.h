/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject

{
    NSData *_data;
    NSString *_formatIdentifier;
    NSString *_formatVersion;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *formatIdentifier;
@property (retain, nonatomic) NSString *formatVersion;

@end
