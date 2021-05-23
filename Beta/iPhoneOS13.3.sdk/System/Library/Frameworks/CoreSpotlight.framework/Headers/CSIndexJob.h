/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class CSSearchContext, NSArray, NSData, NSString;

@interface CSIndexJob : NSObject

{
    long long _jobType;
    long long _jobOptions;
    NSArray *_identifiersToReindex;
    NSArray *_bundleIDs;
    NSArray *_excludedBundleIDs;
    NSString *_providerIdentifier;
    NSString *_providerType;
    NSString *_extensionBundleID;
    CSSearchContext *_searchContext;
    NSData *_importData;
}

@property (nonatomic) long long jobType;
@property (nonatomic) long long jobOptions;
@property (retain, nonatomic) NSArray *identifiersToReindex;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *excludedBundleIDs;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSString *providerType;
@property (retain, nonatomic) NSString *extensionBundleID;
@property (retain, nonatomic) CSSearchContext *searchContext;
@property (retain, nonatomic) NSData *importData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)xpc_dictionary;
- (id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2;
- (id)initWithJobType:(long long)arg1;

@end
