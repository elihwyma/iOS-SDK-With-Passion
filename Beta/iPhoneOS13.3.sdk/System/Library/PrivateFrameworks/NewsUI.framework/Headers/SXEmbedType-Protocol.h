/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class NSString, NSURL;

@protocol SXEmbedType <Swift>

@property (nonatomic, readonly) double minimumWidth;
@property (nonatomic, readonly) double maximumWidth;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *enclosingHTML;
@property (nonatomic, readonly) NSString *javaScript;
@property (nonatomic, readonly) unsigned long long autoPlayMedia;

@end
