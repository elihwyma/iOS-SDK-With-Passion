/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <Swift>

{
    PKBarcode *_barcode;
    NSArray *_storeIdentifiers;
    NSURL *_appLaunchURL;
    NSString *_localizedDescription;
}

@property (retain, nonatomic) PKBarcode *barcode;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (copy, nonatomic) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;
+ (id)contentWithFileURL:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end
