/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CXCallDirectoryStoreIdentificationEntry : NSObject

{
    NSString *_extensionBundleIdentifier;
    NSString *_localizedLabel;
}

@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *localizedLabel;

@end
