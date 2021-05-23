/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSData, NSString, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject

{
    NSString *bundleResourceName;
    NSString *bundleDirectoryName;
    NSBundle *bundle;
    NSString *identifierForStringsFile;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    _Bool instantiatingForSimulator;
    _Bool captureImplicitLoadingContextOnDecode;
}

@property (copy, nonatomic) NSString *bundleResourceName;
@property (copy, nonatomic) NSString *bundleDirectoryName;
@property (retain, nonatomic) NSBundle *bundle;
@property (copy, nonatomic) NSString *identifierForStringsFile;
@property (copy, nonatomic) NSData *archiveData;
@property (retain, nonatomic) UINibDecoder *nibDecoder;
@property (nonatomic) _Bool instantiatingForSimulator;
@property _Bool captureImplicitLoadingContextOnDecode;

@end
