/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class NSArray, NSDictionary, NSString;

@interface NSFileProviderEnumerationProperties

{
    NSArray *_fileTypes;
    NSDictionary *_userInfo;
    NSString *_enumeratingApplicationBundleIdentifier;
    NSString *_enumeratedItemIdentifier;
}

@property (copy) NSArray *fileTypes;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy) NSString *enumeratingApplicationBundleIdentifier;
@property (copy) NSString *enumeratedItemIdentifier;

@end
