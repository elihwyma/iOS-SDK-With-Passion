/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXComponentAnchor;

@protocol SXInsertableComponent <Swift>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *layout;
@property (retain, nonatomic) id <SXComponentAnchor> anchor;

@end
