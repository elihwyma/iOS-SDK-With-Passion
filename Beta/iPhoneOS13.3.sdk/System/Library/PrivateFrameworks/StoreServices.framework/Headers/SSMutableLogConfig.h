/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSLogConfig.h>

@class NSString;

@interface SSMutableLogConfig : SSLogConfig

@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *outputDirectory;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic) _Bool writeToDisk;

@end
