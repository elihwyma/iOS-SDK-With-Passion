/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CKPCSDiagnosticInformation : NSObject

{
    NSString *_identityInfo;
    NSString *_serviceIdentityInfo;
    NSMutableDictionary *_pcsInfoByZoneID;
    NSMutableArray *_notFoundZoneIDs;
}

@property (retain, nonatomic) NSString *identityInfo;
@property (retain, nonatomic) NSString *serviceIdentityInfo;
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID;
@property (retain, nonatomic) NSMutableArray *notFoundZoneIDs;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
