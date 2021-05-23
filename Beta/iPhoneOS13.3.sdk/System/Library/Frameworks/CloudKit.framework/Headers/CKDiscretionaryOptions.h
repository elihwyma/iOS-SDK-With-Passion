/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

#import <CloudKit/Swift-Protocol.h>

@class NSString;

@interface CKDiscretionaryOptions : NSObject <Swift>

{
    _Bool _allowsExpensiveAccess;
    NSString *_sourceApplicationBundleId;
    NSString *_secondarySourceAppplicationBundleId;
    double _timeoutIntervalForResource;
    unsigned long long _discretionaryNetworkBehavior;
}

@property (retain, nonatomic) NSString *sourceApplicationBundleId;
@property (retain, nonatomic) NSString *secondarySourceAppplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) _Bool allowsExpensiveAccess;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
