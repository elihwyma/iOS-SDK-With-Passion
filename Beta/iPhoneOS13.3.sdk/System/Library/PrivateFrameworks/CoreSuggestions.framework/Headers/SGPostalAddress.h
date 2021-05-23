/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject

{
    NSString *_cachedAddress;
    struct _opaque_pthread_mutex_t _cachedAddressLock;
    NSString *_rawAddress;
    SGPostalAddressComponents *_components;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *rawAddress;
@property (nonatomic, readonly) SGPostalAddressComponents *components;

+ (_Bool)supportsSecureCoding;
+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5;
+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6;
+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5;
- (_Bool)isEqualToPostalAddress:(id)arg1;

@end
