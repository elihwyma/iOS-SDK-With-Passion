/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaURLComponents : NSObject

{
    NSString *_identifier;
    NSString *_storefrontCountryCode;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *storefrontCountryCode;

+ (id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2;
+ (id)storefrontCountryCodeFromPathComponent:(id)arg1;

- (id)initWithURL:(id)arg1;

@end
