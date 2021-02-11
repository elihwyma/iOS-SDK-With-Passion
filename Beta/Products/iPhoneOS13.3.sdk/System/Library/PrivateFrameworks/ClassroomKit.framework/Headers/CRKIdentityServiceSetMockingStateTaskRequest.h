/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceSetMockingStateTaskRequest : CATTaskRequest {
    bool  _mockingEnabled;
}

@property (getter=isMockingEnabled, nonatomic) bool mockingEnabled;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMockingEnabled;
- (void)setMockingEnabled:(bool)arg1;

@end