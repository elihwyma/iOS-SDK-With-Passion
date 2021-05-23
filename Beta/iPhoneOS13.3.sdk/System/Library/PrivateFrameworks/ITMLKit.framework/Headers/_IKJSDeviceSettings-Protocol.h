/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol _IKJSDeviceSettings <Swift>

@property (retain, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSString *preferredVideoFormat;
@property (retain, nonatomic, readonly) NSString *preferredVideoPreviewFormat;
@property (nonatomic, readonly) struct CGSize Screen;
@property (nonatomic, readonly) IKJSRestrictions *Restrictions;
@property (nonatomic, readonly) struct CGSize screen;

@end
