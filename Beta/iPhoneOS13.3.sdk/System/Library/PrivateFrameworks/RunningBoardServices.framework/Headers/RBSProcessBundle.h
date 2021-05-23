/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSDictionary, NSString, RBSProcessInstance;

@protocol RBSProcessBundleDataSource;

@interface RBSProcessBundle : NSObject

{
    NSDictionary *_plistValues;
    NSString *_identifier;
    NSString *_path;
    NSString *_executablePath;
    NSString *_extensionPointIdentifier;
    id <RBSProcessBundleDataSource> _dataSource;
    RBSProcessInstance *_instance;
}

@property (weak, nonatomic, readonly) id <RBSProcessBundleDataSource> dataSource;
@property (retain, nonatomic) RBSProcessInstance *instance;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *path;
@property (copy, nonatomic, readonly) NSString *executablePath;
@property (copy, nonatomic, readonly) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)bundleWithDataSource:(id)arg1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1;

@end
