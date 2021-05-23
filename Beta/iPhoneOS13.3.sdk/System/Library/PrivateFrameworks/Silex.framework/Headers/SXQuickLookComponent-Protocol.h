/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString, SXFormattedText;

@protocol SXQuickLookComponent <Swift>

@property (nonatomic, readonly) SXFormattedText *caption;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) NSString *fileExtension;

@end
