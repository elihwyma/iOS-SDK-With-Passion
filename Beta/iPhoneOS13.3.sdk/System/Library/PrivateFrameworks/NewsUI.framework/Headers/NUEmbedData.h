/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Silex/SXJSONObject.h>

@class NSString, NSURL;

@interface NUEmbedData : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double minimumWidth;
@property (nonatomic, readonly) double maximumWidth;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *enclosingHTML;
@property (nonatomic, readonly) NSString *javaScript;
@property (nonatomic, readonly) unsigned long long autoPlayMedia;

- (unsigned long long)autoPlayMediaWithValue:(id)arg1 withType:(int)arg2;

@end
