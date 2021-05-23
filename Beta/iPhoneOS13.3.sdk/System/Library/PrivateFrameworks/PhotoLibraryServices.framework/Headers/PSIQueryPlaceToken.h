/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PSIQueryToken.h>

@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken

{
    NSDictionary *_locationNameByCategory;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentToken;
- (id)initWithText:(id)arg1 locationNameByCategory:(id)arg2;

@end
