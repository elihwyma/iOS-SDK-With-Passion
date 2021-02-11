/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

@interface CMData : NSObject <NSSecureCoding> {
    NSData * _data;
    bool  _isSent;
    NSString * _sourcePeerDisplayName;
    double  _timestamp;
    long long  _type;
}

@property (nonatomic, retain) NSData *data;
@property bool isSent;
@property (nonatomic, retain) NSString *sourcePeerDisplayName;
@property double timestamp;
@property long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSent;
- (void)setData:(id)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setSourcePeerDisplayName:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (id)sourcePeerDisplayName;
- (double)timestamp;
- (long long)type;

@end