/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCollectionElement.h>

@class IKImageElement, NSString;

@interface IKColumnElement : IKCollectionElement

@property (nonatomic, readonly) NSString *columnType;
@property (nonatomic, readonly) IKImageElement *headerImage;

@end
