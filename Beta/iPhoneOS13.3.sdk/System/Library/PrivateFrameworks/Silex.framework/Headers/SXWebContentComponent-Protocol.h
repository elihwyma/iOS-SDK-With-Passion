/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString, NSURL, SXJSONDictionary;

@protocol SXWebContentComponent <Swift>

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) SXJSONDictionary *dataSourceReferences;

@end
