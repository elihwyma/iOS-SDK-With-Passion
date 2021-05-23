/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <FileProviderUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FPUIActionControllerProtocol <Swift>

@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *domainIdentifier;

+ (unsigned short)actionControllerForActionIdentifier:actionTitle:items:providerIdentifier:domainIdentifier: /* Error: Ran out of types for this method. */;

@end
