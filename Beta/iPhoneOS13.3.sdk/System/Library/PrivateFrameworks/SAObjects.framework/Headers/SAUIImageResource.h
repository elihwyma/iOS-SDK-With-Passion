/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAUIImageResource : AceObject <Swift>

@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (nonatomic) double pointHeight;
@property (nonatomic) double pointWidth;
@property (copy, nonatomic) NSURL *resourceUrl;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *urlFormatString;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)imageResource;
+ (id)imageResourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
