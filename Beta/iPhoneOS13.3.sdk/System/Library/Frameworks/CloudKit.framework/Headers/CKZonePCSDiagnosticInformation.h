/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSError, NSString;

@interface CKZonePCSDiagnosticInformation : NSObject

{
    _Bool _wasRepaired;
    int _pcsStatus;
    NSString *_pcsDiagnosticString;
    NSError *_pcsError;
}

@property (nonatomic) _Bool wasRepaired;
@property (nonatomic) int pcsStatus;
@property (retain, nonatomic) NSString *pcsDiagnosticString;
@property (retain, nonatomic) NSError *pcsError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
